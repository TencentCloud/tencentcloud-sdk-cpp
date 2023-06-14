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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTSCOVERALERT_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTSCOVERALERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 遮挡告警
                */
                class CreateCameraAlertsCoverAlert : public AbstractModel
                {
                public:
                    CreateCameraAlertsCoverAlert();
                    ~CreateCameraAlertsCoverAlert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否遮挡
                     * @return Cover 是否遮挡
                     * 
                     */
                    bool GetCover() const;

                    /**
                     * 设置是否遮挡
                     * @param _cover 是否遮挡
                     * 
                     */
                    void SetCover(const bool& _cover);

                    /**
                     * 判断参数 Cover 是否已赋值
                     * @return Cover 是否已赋值
                     * 
                     */
                    bool CoverHasBeenSet() const;

                    /**
                     * 获取是否移动置信度
                     * @return CoverConfidence 是否移动置信度
                     * 
                     */
                    double GetCoverConfidence() const;

                    /**
                     * 设置是否移动置信度
                     * @param _coverConfidence 是否移动置信度
                     * 
                     */
                    void SetCoverConfidence(const double& _coverConfidence);

                    /**
                     * 判断参数 CoverConfidence 是否已赋值
                     * @return CoverConfidence 是否已赋值
                     * 
                     */
                    bool CoverConfidenceHasBeenSet() const;

                private:

                    /**
                     * 是否遮挡
                     */
                    bool m_cover;
                    bool m_coverHasBeenSet;

                    /**
                     * 是否移动置信度
                     */
                    double m_coverConfidence;
                    bool m_coverConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTSCOVERALERT_H_
