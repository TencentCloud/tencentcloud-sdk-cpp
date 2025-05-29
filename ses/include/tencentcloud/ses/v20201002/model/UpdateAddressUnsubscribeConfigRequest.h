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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATEADDRESSUNSUBSCRIBECONFIGREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATEADDRESSUNSUBSCRIBECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * UpdateAddressUnsubscribeConfig请求参数结构体
                */
                class UpdateAddressUnsubscribeConfigRequest : public AbstractModel
                {
                public:
                    UpdateAddressUnsubscribeConfigRequest();
                    ~UpdateAddressUnsubscribeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取发信地址
                     * @return Address 发信地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置发信地址
                     * @param _address 发信地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     * @return UnsubscribeConfig 退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     * 
                     */
                    std::string GetUnsubscribeConfig() const;

                    /**
                     * 设置退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     * @param _unsubscribeConfig 退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     * 
                     */
                    void SetUnsubscribeConfig(const std::string& _unsubscribeConfig);

                    /**
                     * 判断参数 UnsubscribeConfig 是否已赋值
                     * @return UnsubscribeConfig 是否已赋值
                     * 
                     */
                    bool UnsubscribeConfigHasBeenSet() const;

                    /**
                     * 获取0:关闭配置，1:打开配置
                     * @return Status 0:关闭配置，1:打开配置
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0:关闭配置，1:打开配置
                     * @param _status 0:关闭配置，1:打开配置
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 发信地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 退订链接选项 0: 不加入退订链接 1: 简体中文 2: 英文 3: 繁体中文 4: 西班牙语 5: 法语 6: 德语 7: 日语 8: 韩语 9: 阿拉伯语 10: 泰语
                     */
                    std::string m_unsubscribeConfig;
                    bool m_unsubscribeConfigHasBeenSet;

                    /**
                     * 0:关闭配置，1:打开配置
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEADDRESSUNSUBSCRIBECONFIGREQUEST_H_
