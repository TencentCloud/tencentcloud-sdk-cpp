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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALUSERMAPPINGINFORESPONSE_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALUSERMAPPINGINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/ExternalUserMappingInfo.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryExternalUserMappingInfo返回参数结构体
                */
                class QueryExternalUserMappingInfoResponse : public AbstractModel
                {
                public:
                    QueryExternalUserMappingInfoResponse();
                    ~QueryExternalUserMappingInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取外部联系人映射信息, 只返回映射成功的记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalUserIdMapping 外部联系人映射信息, 只返回映射成功的记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExternalUserMappingInfo> GetExternalUserIdMapping() const;

                    /**
                     * 判断参数 ExternalUserIdMapping 是否已赋值
                     * @return ExternalUserIdMapping 是否已赋值
                     * 
                     */
                    bool ExternalUserIdMappingHasBeenSet() const;

                private:

                    /**
                     * 外部联系人映射信息, 只返回映射成功的记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExternalUserMappingInfo> m_externalUserIdMapping;
                    bool m_externalUserIdMappingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALUSERMAPPINGINFORESPONSE_H_
