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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CREATEBATCHREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CREATEBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * CreateBatch请求参数结构体
                */
                class CreateBatchRequest : public AbstractModel
                {
                public:
                    CreateBatchRequest();
                    ~CreateBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取批次创建的设备数量
                     * @return DevNum 批次创建的设备数量
                     * 
                     */
                    uint64_t GetDevNum() const;

                    /**
                     * 设置批次创建的设备数量
                     * @param _devNum 批次创建的设备数量
                     * 
                     */
                    void SetDevNum(const uint64_t& _devNum);

                    /**
                     * 判断参数 DevNum 是否已赋值
                     * @return DevNum 是否已赋值
                     * 
                     */
                    bool DevNumHasBeenSet() const;

                    /**
                     * 获取批次创建的设备前缀。不超过24个字符
                     * @return DevPre 批次创建的设备前缀。不超过24个字符
                     * 
                     */
                    std::string GetDevPre() const;

                    /**
                     * 设置批次创建的设备前缀。不超过24个字符
                     * @param _devPre 批次创建的设备前缀。不超过24个字符
                     * 
                     */
                    void SetDevPre(const std::string& _devPre);

                    /**
                     * 判断参数 DevPre 是否已赋值
                     * @return DevPre 是否已赋值
                     * 
                     */
                    bool DevPreHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 批次创建的设备数量
                     */
                    uint64_t m_devNum;
                    bool m_devNumHasBeenSet;

                    /**
                     * 批次创建的设备前缀。不超过24个字符
                     */
                    std::string m_devPre;
                    bool m_devPreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CREATEBATCHREQUEST_H_
