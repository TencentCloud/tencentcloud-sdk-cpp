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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CREATEKEYWORDSSAMPLESRESPONSE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CREATEKEYWORDSSAMPLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/UserKeywordInfo.h>
#include <tencentcloud/cms/v20190321/model/InvalidSample.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * CreateKeywordsSamples返回参数结构体
                */
                class CreateKeywordsSamplesResponse : public AbstractModel
                {
                public:
                    CreateKeywordsSamplesResponse();
                    ~CreateKeywordsSamplesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取添加成功的关键词ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleIDs 添加成功的关键词ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSampleIDs() const;

                    /**
                     * 判断参数 SampleIDs 是否已赋值
                     * @return SampleIDs 是否已赋值
                     * 
                     */
                    bool SampleIDsHasBeenSet() const;

                    /**
                     * 获取成功入库关键词列表
                     * @return SuccessInfos 成功入库关键词列表
                     * 
                     */
                    std::vector<UserKeywordInfo> GetSuccessInfos() const;

                    /**
                     * 判断参数 SuccessInfos 是否已赋值
                     * @return SuccessInfos 是否已赋值
                     * 
                     */
                    bool SuccessInfosHasBeenSet() const;

                    /**
                     * 获取重复关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DupInfos 重复关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserKeywordInfo> GetDupInfos() const;

                    /**
                     * 判断参数 DupInfos 是否已赋值
                     * @return DupInfos 是否已赋值
                     * 
                     */
                    bool DupInfosHasBeenSet() const;

                    /**
                     * 获取无效关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvalidSamples 无效关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InvalidSample> GetInvalidSamples() const;

                    /**
                     * 判断参数 InvalidSamples 是否已赋值
                     * @return InvalidSamples 是否已赋值
                     * 
                     */
                    bool InvalidSamplesHasBeenSet() const;

                private:

                    /**
                     * 添加成功的关键词ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_sampleIDs;
                    bool m_sampleIDsHasBeenSet;

                    /**
                     * 成功入库关键词列表
                     */
                    std::vector<UserKeywordInfo> m_successInfos;
                    bool m_successInfosHasBeenSet;

                    /**
                     * 重复关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserKeywordInfo> m_dupInfos;
                    bool m_dupInfosHasBeenSet;

                    /**
                     * 无效关键词列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InvalidSample> m_invalidSamples;
                    bool m_invalidSamplesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CREATEKEYWORDSSAMPLESRESPONSE_H_
