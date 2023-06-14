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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_RENEWPROVERSIONREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_RENEWPROVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/ChargePrepaid.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * RenewProVersion请求参数结构体
                */
                class RenewProVersionRequest : public AbstractModel
                {
                public:
                    RenewProVersionRequest();
                    ~RenewProVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取购买相关参数。
                     * @return ChargePrepaid 购买相关参数。
                     * 
                     */
                    ChargePrepaid GetChargePrepaid() const;

                    /**
                     * 设置购买相关参数。
                     * @param _chargePrepaid 购买相关参数。
                     * 
                     */
                    void SetChargePrepaid(const ChargePrepaid& _chargePrepaid);

                    /**
                     * 判断参数 ChargePrepaid 是否已赋值
                     * @return ChargePrepaid 是否已赋值
                     * 
                     */
                    bool ChargePrepaidHasBeenSet() const;

                    /**
                     * 获取主机唯一ID，对应CVM的uuid、BM的InstanceId。
                     * @return Quuid 主机唯一ID，对应CVM的uuid、BM的InstanceId。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机唯一ID，对应CVM的uuid、BM的InstanceId。
                     * @param _quuid 主机唯一ID，对应CVM的uuid、BM的InstanceId。
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 购买相关参数。
                     */
                    ChargePrepaid m_chargePrepaid;
                    bool m_chargePrepaidHasBeenSet;

                    /**
                     * 主机唯一ID，对应CVM的uuid、BM的InstanceId。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_RENEWPROVERSIONREQUEST_H_
