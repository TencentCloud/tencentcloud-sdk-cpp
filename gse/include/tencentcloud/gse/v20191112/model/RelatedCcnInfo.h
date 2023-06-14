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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_RELATEDCCNINFO_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_RELATEDCCNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 云联网相关信息描述
                */
                class RelatedCcnInfo : public AbstractModel
                {
                public:
                    RelatedCcnInfo();
                    ~RelatedCcnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云联网所属账号
                     * @return AccountId 云联网所属账号
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置云联网所属账号
                     * @param _accountId 云联网所属账号
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取云联网 ID
                     * @return CcnId 云联网 ID
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网 ID
                     * @param _ccnId 云联网 ID
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取关联云联网状态
                     * @return AttachType 关联云联网状态
                     * 
                     */
                    std::string GetAttachType() const;

                    /**
                     * 设置关联云联网状态
                     * @param _attachType 关联云联网状态
                     * 
                     */
                    void SetAttachType(const std::string& _attachType);

                    /**
                     * 判断参数 AttachType 是否已赋值
                     * @return AttachType 是否已赋值
                     * 
                     */
                    bool AttachTypeHasBeenSet() const;

                private:

                    /**
                     * 云联网所属账号
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 云联网 ID
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 关联云联网状态
                     */
                    std::string m_attachType;
                    bool m_attachTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_RELATEDCCNINFO_H_
