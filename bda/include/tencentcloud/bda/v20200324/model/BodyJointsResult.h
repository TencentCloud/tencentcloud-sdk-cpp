/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_BODYJOINTSRESULT_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_BODYJOINTSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/BoundRect.h>
#include <tencentcloud/bda/v20200324/model/KeyPointInfo.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 人体框和人体关键点信息。
                */
                class BodyJointsResult : public AbstractModel
                {
                public:
                    BodyJointsResult();
                    ~BodyJointsResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图中检测出来的人体框。
                     * @return BoundBox 图中检测出来的人体框。
                     * 
                     */
                    BoundRect GetBoundBox() const;

                    /**
                     * 设置图中检测出来的人体框。
                     * @param _boundBox 图中检测出来的人体框。
                     * 
                     */
                    void SetBoundBox(const BoundRect& _boundBox);

                    /**
                     * 判断参数 BoundBox 是否已赋值
                     * @return BoundBox 是否已赋值
                     * 
                     */
                    bool BoundBoxHasBeenSet() const;

                    /**
                     * 获取14个人体关键点的坐标，人体关键点详见KeyPointInfo。
                     * @return BodyJoints 14个人体关键点的坐标，人体关键点详见KeyPointInfo。
                     * 
                     */
                    std::vector<KeyPointInfo> GetBodyJoints() const;

                    /**
                     * 设置14个人体关键点的坐标，人体关键点详见KeyPointInfo。
                     * @param _bodyJoints 14个人体关键点的坐标，人体关键点详见KeyPointInfo。
                     * 
                     */
                    void SetBodyJoints(const std::vector<KeyPointInfo>& _bodyJoints);

                    /**
                     * 判断参数 BodyJoints 是否已赋值
                     * @return BodyJoints 是否已赋值
                     * 
                     */
                    bool BodyJointsHasBeenSet() const;

                    /**
                     * 获取检测出的人体置信度，0-1之间，数值越高越准确。
                     * @return Confidence 检测出的人体置信度，0-1之间，数值越高越准确。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置检测出的人体置信度，0-1之间，数值越高越准确。
                     * @param _confidence 检测出的人体置信度，0-1之间，数值越高越准确。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 图中检测出来的人体框。
                     */
                    BoundRect m_boundBox;
                    bool m_boundBoxHasBeenSet;

                    /**
                     * 14个人体关键点的坐标，人体关键点详见KeyPointInfo。
                     */
                    std::vector<KeyPointInfo> m_bodyJoints;
                    bool m_bodyJointsHasBeenSet;

                    /**
                     * 检测出的人体置信度，0-1之间，数值越高越准确。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_BODYJOINTSRESULT_H_
