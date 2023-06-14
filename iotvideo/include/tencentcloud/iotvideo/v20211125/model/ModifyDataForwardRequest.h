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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_MODIFYDATAFORWARDREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_MODIFYDATAFORWARDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * ModifyDataForward请求参数结构体
                */
                class ModifyDataForwardRequest : public AbstractModel
                {
                public:
                    ModifyDataForwardRequest();
                    ~ModifyDataForwardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID。
                     * @return ProductId 产品ID。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID。
                     * @param _productId 产品ID。
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取转发地址。如果有鉴权Token，则需要自行传入，例如 [{\"forward\":{\"api\":\"http://123.207.117.108:1080/sub.php\",\"token\":\"testtoken\"}}]
                     * @return ForwardAddr 转发地址。如果有鉴权Token，则需要自行传入，例如 [{\"forward\":{\"api\":\"http://123.207.117.108:1080/sub.php\",\"token\":\"testtoken\"}}]
                     * 
                     */
                    std::string GetForwardAddr() const;

                    /**
                     * 设置转发地址。如果有鉴权Token，则需要自行传入，例如 [{\"forward\":{\"api\":\"http://123.207.117.108:1080/sub.php\",\"token\":\"testtoken\"}}]
                     * @param _forwardAddr 转发地址。如果有鉴权Token，则需要自行传入，例如 [{\"forward\":{\"api\":\"http://123.207.117.108:1080/sub.php\",\"token\":\"testtoken\"}}]
                     * 
                     */
                    void SetForwardAddr(const std::string& _forwardAddr);

                    /**
                     * 判断参数 ForwardAddr 是否已赋值
                     * @return ForwardAddr 是否已赋值
                     * 
                     */
                    bool ForwardAddrHasBeenSet() const;

                    /**
                     * 获取1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
                     * @return DataChose 1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
                     * 
                     */
                    int64_t GetDataChose() const;

                    /**
                     * 设置1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
                     * @param _dataChose 1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
                     * 
                     */
                    void SetDataChose(const int64_t& _dataChose);

                    /**
                     * 判断参数 DataChose 是否已赋值
                     * @return DataChose 是否已赋值
                     * 
                     */
                    bool DataChoseHasBeenSet() const;

                private:

                    /**
                     * 产品ID。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 转发地址。如果有鉴权Token，则需要自行传入，例如 [{\"forward\":{\"api\":\"http://123.207.117.108:1080/sub.php\",\"token\":\"testtoken\"}}]
                     */
                    std::string m_forwardAddr;
                    bool m_forwardAddrHasBeenSet;

                    /**
                     * 1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
                     */
                    int64_t m_dataChose;
                    bool m_dataChoseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_MODIFYDATAFORWARDREQUEST_H_
