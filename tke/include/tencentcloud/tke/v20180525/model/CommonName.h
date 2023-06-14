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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_COMMONNAME_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_COMMONNAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 账户UIN与客户端证书CommonName的映射
                */
                class CommonName : public AbstractModel
                {
                public:
                    CommonName();
                    ~CommonName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子账户UIN
                     * @return SubaccountUin 子账户UIN
                     * 
                     */
                    std::string GetSubaccountUin() const;

                    /**
                     * 设置子账户UIN
                     * @param _subaccountUin 子账户UIN
                     * 
                     */
                    void SetSubaccountUin(const std::string& _subaccountUin);

                    /**
                     * 判断参数 SubaccountUin 是否已赋值
                     * @return SubaccountUin 是否已赋值
                     * 
                     */
                    bool SubaccountUinHasBeenSet() const;

                    /**
                     * 获取子账户客户端证书中的CommonName字段
                     * @return CN 子账户客户端证书中的CommonName字段
                     * 
                     */
                    std::string GetCN() const;

                    /**
                     * 设置子账户客户端证书中的CommonName字段
                     * @param _cN 子账户客户端证书中的CommonName字段
                     * 
                     */
                    void SetCN(const std::string& _cN);

                    /**
                     * 判断参数 CN 是否已赋值
                     * @return CN 是否已赋值
                     * 
                     */
                    bool CNHasBeenSet() const;

                private:

                    /**
                     * 子账户UIN
                     */
                    std::string m_subaccountUin;
                    bool m_subaccountUinHasBeenSet;

                    /**
                     * 子账户客户端证书中的CommonName字段
                     */
                    std::string m_cN;
                    bool m_cNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_COMMONNAME_H_
