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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_IOCLISTDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_IOCLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 封禁放通IOC列表
                */
                class IocListData : public AbstractModel
                {
                public:
                    IocListData();
                    ~IocListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待处置IP地址，IP/Domain字段二选一
                     * @return IP 待处置IP地址，IP/Domain字段二选一
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置待处置IP地址，IP/Domain字段二选一
                     * @param _iP 待处置IP地址，IP/Domain字段二选一
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取只能为0或者1   0代表出站 1代表入站
                     * @return Direction 只能为0或者1   0代表出站 1代表入站
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置只能为0或者1   0代表出站 1代表入站
                     * @param _direction 只能为0或者1   0代表出站 1代表入站
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取待处置域名，IP/Domain字段二选一
                     * @return Domain 待处置域名，IP/Domain字段二选一
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置待处置域名，IP/Domain字段二选一
                     * @param _domain 待处置域名，IP/Domain字段二选一
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 待处置IP地址，IP/Domain字段二选一
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 只能为0或者1   0代表出站 1代表入站
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 待处置域名，IP/Domain字段二选一
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_IOCLISTDATA_H_
