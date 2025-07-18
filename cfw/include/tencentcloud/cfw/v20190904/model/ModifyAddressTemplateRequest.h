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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYADDRESSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYADDRESSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyAddressTemplate请求参数结构体
                */
                class ModifyAddressTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAddressTemplateRequest();
                    ~ModifyAddressTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地址模板唯一Id
                     * @return Uuid 地址模板唯一Id
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置地址模板唯一Id
                     * @param _uuid 地址模板唯一Id
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取模板名称
                     * @return Name 模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
                     * @param _name 模板名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取模板描述
                     * @return Detail 模板描述
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置模板描述
                     * @param _detail 模板描述
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Type为1，ip模板eg：1.1.1.1,2.2.2.2；
Type为5，域名模板eg：www.qq.com,www.tencent.com
                     * @return IpString Type为1，ip模板eg：1.1.1.1,2.2.2.2；
Type为5，域名模板eg：www.qq.com,www.tencent.com
                     * 
                     */
                    std::string GetIpString() const;

                    /**
                     * 设置Type为1，ip模板eg：1.1.1.1,2.2.2.2；
Type为5，域名模板eg：www.qq.com,www.tencent.com
                     * @param _ipString Type为1，ip模板eg：1.1.1.1,2.2.2.2；
Type为5，域名模板eg：www.qq.com,www.tencent.com
                     * 
                     */
                    void SetIpString(const std::string& _ipString);

                    /**
                     * 判断参数 IpString 是否已赋值
                     * @return IpString 是否已赋值
                     * 
                     */
                    bool IpStringHasBeenSet() const;

                    /**
                     * 获取1 ip模板
5 域名模板
                     * @return Type 1 ip模板
5 域名模板
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置1 ip模板
5 域名模板
                     * @param _type 1 ip模板
5 域名模板
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取协议端口模板，协议类型，4:4层协议，7:7层协议。Type=6时必填。
                     * @return ProtocolType 协议端口模板，协议类型，4:4层协议，7:7层协议。Type=6时必填。
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置协议端口模板，协议类型，4:4层协议，7:7层协议。Type=6时必填。
                     * @param _protocolType 协议端口模板，协议类型，4:4层协议，7:7层协议。Type=6时必填。
                     * 
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                private:

                    /**
                     * 地址模板唯一Id
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Type为1，ip模板eg：1.1.1.1,2.2.2.2；
Type为5，域名模板eg：www.qq.com,www.tencent.com
                     */
                    std::string m_ipString;
                    bool m_ipStringHasBeenSet;

                    /**
                     * 1 ip模板
5 域名模板
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 协议端口模板，协议类型，4:4层协议，7:7层协议。Type=6时必填。
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYADDRESSTEMPLATEREQUEST_H_
