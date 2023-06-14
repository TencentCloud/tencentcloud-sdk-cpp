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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETENONLOCALLOGINPLACESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETENONLOCALLOGINPLACESREQUEST_H_

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
                * DeleteNonlocalLoginPlaces请求参数结构体
                */
                class DeleteNonlocalLoginPlacesRequest : public AbstractModel
                {
                public:
                    DeleteNonlocalLoginPlacesRequest();
                    ~DeleteNonlocalLoginPlacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除异地登录事件的方式，可选值："Ids"、"Ip"、"All"，默认为Ids
                     * @return DelType 删除异地登录事件的方式，可选值："Ids"、"Ip"、"All"，默认为Ids
                     * 
                     */
                    std::string GetDelType() const;

                    /**
                     * 设置删除异地登录事件的方式，可选值："Ids"、"Ip"、"All"，默认为Ids
                     * @param _delType 删除异地登录事件的方式，可选值："Ids"、"Ip"、"All"，默认为Ids
                     * 
                     */
                    void SetDelType(const std::string& _delType);

                    /**
                     * 判断参数 DelType 是否已赋值
                     * @return DelType 是否已赋值
                     * 
                     */
                    bool DelTypeHasBeenSet() const;

                    /**
                     * 获取异地登录事件ID数组。DelType为Ids或DelType未填时此项必填
                     * @return Ids 异地登录事件ID数组。DelType为Ids或DelType未填时此项必填
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置异地登录事件ID数组。DelType为Ids或DelType未填时此项必填
                     * @param _ids 异地登录事件ID数组。DelType为Ids或DelType未填时此项必填
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取异地登录事件的Ip。DelType为Ip时必填
                     * @return Ip 异地登录事件的Ip。DelType为Ip时必填
                     * 
                     */
                    std::vector<std::string> GetIp() const;

                    /**
                     * 设置异地登录事件的Ip。DelType为Ip时必填
                     * @param _ip 异地登录事件的Ip。DelType为Ip时必填
                     * 
                     */
                    void SetIp(const std::vector<std::string>& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取主机Uuid
                     * @return Uuid 主机Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
                     * @param _uuid 主机Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 删除异地登录事件的方式，可选值："Ids"、"Ip"、"All"，默认为Ids
                     */
                    std::string m_delType;
                    bool m_delTypeHasBeenSet;

                    /**
                     * 异地登录事件ID数组。DelType为Ids或DelType未填时此项必填
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 异地登录事件的Ip。DelType为Ip时必填
                     */
                    std::vector<std::string> m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 主机Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETENONLOCALLOGINPLACESREQUEST_H_
