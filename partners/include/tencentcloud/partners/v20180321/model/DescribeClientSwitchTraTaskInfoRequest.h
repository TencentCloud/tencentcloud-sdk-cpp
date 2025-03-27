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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTSWITCHTRATASKINFOREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTSWITCHTRATASKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeClientSwitchTraTaskInfo请求参数结构体
                */
                class DescribeClientSwitchTraTaskInfoRequest : public AbstractModel
                {
                public:
                    DescribeClientSwitchTraTaskInfoRequest();
                    ~DescribeClientSwitchTraTaskInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代客UIN
                     * @return ClientUin 代客UIN
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置代客UIN
                     * @param _clientUin 代客UIN
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取1：代理，2：代采
                     * @return SwitchType 1：代理，2：代采
                     * 
                     */
                    int64_t GetSwitchType() const;

                    /**
                     * 设置1：代理，2：代采
                     * @param _switchType 1：代理，2：代采
                     * 
                     */
                    void SetSwitchType(const int64_t& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                private:

                    /**
                     * 代客UIN
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 1：代理，2：代采
                     */
                    int64_t m_switchType;
                    bool m_switchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTSWITCHTRATASKINFOREQUEST_H_
