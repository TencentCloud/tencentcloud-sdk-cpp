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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUSPECTEDINFO_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUSPECTEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/FrameInfo.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 疑似出席人员
                */
                class SuspectedInfo : public AbstractModel
                {
                public:
                    SuspectedInfo();
                    ~SuspectedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TopN匹配信息列表
                     * @return FaceSet TopN匹配信息列表
                     * 
                     */
                    std::vector<FrameInfo> GetFaceSet() const;

                    /**
                     * 设置TopN匹配信息列表
                     * @param _faceSet TopN匹配信息列表
                     * 
                     */
                    void SetFaceSet(const std::vector<FrameInfo>& _faceSet);

                    /**
                     * 判断参数 FaceSet 是否已赋值
                     * @return FaceSet 是否已赋值
                     * 
                     */
                    bool FaceSetHasBeenSet() const;

                    /**
                     * 获取识别到的人员id
                     * @return PersonId 识别到的人员id
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置识别到的人员id
                     * @param _personId 识别到的人员id
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                private:

                    /**
                     * TopN匹配信息列表
                     */
                    std::vector<FrameInfo> m_faceSet;
                    bool m_faceSetHasBeenSet;

                    /**
                     * 识别到的人员id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUSPECTEDINFO_H_
