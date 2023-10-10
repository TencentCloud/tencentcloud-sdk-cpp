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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKRECEIVERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKRECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWebHookReceiver请求参数结构体
                */
                class ModifyWebHookReceiverRequest : public AbstractModel
                {
                public:
                    ModifyWebHookReceiverRequest();
                    ~ModifyWebHookReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取接收人名称
                     * @return Name 接收人名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置接收人名称
                     * @param _name 接收人名称
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
                     * 获取webhook地址
                     * @return Addr webhook地址
                     * 
                     */
                    std::string GetAddr() const;

                    /**
                     * 设置webhook地址
                     * @param _addr webhook地址
                     * 
                     */
                    void SetAddr(const std::string& _addr);

                    /**
                     * 判断参数 Addr 是否已赋值
                     * @return Addr 是否已赋值
                     * 
                     */
                    bool AddrHasBeenSet() const;

                    /**
                     * 获取是否修改
                     * @return IsModify 是否修改
                     * 
                     */
                    bool GetIsModify() const;

                    /**
                     * 设置是否修改
                     * @param _isModify 是否修改
                     * 
                     */
                    void SetIsModify(const bool& _isModify);

                    /**
                     * 判断参数 IsModify 是否已赋值
                     * @return IsModify 是否已赋值
                     * 
                     */
                    bool IsModifyHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 接收人名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * webhook地址
                     */
                    std::string m_addr;
                    bool m_addrHasBeenSet;

                    /**
                     * 是否修改
                     */
                    bool m_isModify;
                    bool m_isModifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKRECEIVERREQUEST_H_
