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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_UPLOADDEVICEUNIQUECODEREQUEST_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_UPLOADDEVICEUNIQUECODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * UploadDeviceUniqueCode请求参数结构体
                */
                class UploadDeviceUniqueCodeRequest : public AbstractModel
                {
                public:
                    UploadDeviceUniqueCodeRequest();
                    ~UploadDeviceUniqueCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取硬件唯一标识码
                     * @return CodeSet 硬件唯一标识码
                     * 
                     */
                    std::vector<std::string> GetCodeSet() const;

                    /**
                     * 设置硬件唯一标识码
                     * @param _codeSet 硬件唯一标识码
                     * 
                     */
                    void SetCodeSet(const std::vector<std::string>& _codeSet);

                    /**
                     * 判断参数 CodeSet 是否已赋值
                     * @return CodeSet 是否已赋值
                     * 
                     */
                    bool CodeSetHasBeenSet() const;

                    /**
                     * 获取硬件标识码绑定的申请编号
                     * @return OrderId 硬件标识码绑定的申请编号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置硬件标识码绑定的申请编号
                     * @param _orderId 硬件标识码绑定的申请编号
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * 硬件唯一标识码
                     */
                    std::vector<std::string> m_codeSet;
                    bool m_codeSetHasBeenSet;

                    /**
                     * 硬件标识码绑定的申请编号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_UPLOADDEVICEUNIQUECODEREQUEST_H_
