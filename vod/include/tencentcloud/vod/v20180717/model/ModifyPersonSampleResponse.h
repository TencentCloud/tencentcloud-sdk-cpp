/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYPERSONSAMPLERESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYPERSONSAMPLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiSamplePerson.h>
#include <tencentcloud/vod/v20180717/model/AiSampleFailFaceInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyPersonSample返回参数结构体
                */
                class ModifyPersonSampleResponse : public AbstractModel
                {
                public:
                    ModifyPersonSampleResponse();
                    ~ModifyPersonSampleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取素材信息。
                     * @return Person 素材信息。
                     * 
                     */
                    AiSamplePerson GetPerson() const;

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取处理失败的五官信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailFaceInfoSet 处理失败的五官信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AiSampleFailFaceInfo> GetFailFaceInfoSet() const;

                    /**
                     * 判断参数 FailFaceInfoSet 是否已赋值
                     * @return FailFaceInfoSet 是否已赋值
                     * 
                     */
                    bool FailFaceInfoSetHasBeenSet() const;

                private:

                    /**
                     * 素材信息。
                     */
                    AiSamplePerson m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 处理失败的五官信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AiSampleFailFaceInfo> m_failFaceInfoSet;
                    bool m_failFaceInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYPERSONSAMPLERESPONSE_H_
