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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEAISEARCHTASKASYNCREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEAISEARCHTASKASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateAISearchTaskAsync请求参数结构体
                */
                class CreateAISearchTaskAsyncRequest : public AbstractModel
                {
                public:
                    CreateAISearchTaskAsyncRequest();
                    ~CreateAISearchTaskAsyncRequest() = default;
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取自然语言查询
                     * @return Query 自然语言查询
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置自然语言查询
                     * @param _query 自然语言查询
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     * @return SummaryLang 搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     * 
                     */
                    std::string GetSummaryLang() const;

                    /**
                     * 设置搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     * @param _summaryLang 搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     * 
                     */
                    void SetSummaryLang(const std::string& _summaryLang);

                    /**
                     * 判断参数 SummaryLang 是否已赋值
                     * @return SummaryLang 是否已赋值
                     * 
                     */
                    bool SummaryLangHasBeenSet() const;

                    /**
                     * 获取通道ID
                     * @return ChannelId 通道ID
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置通道ID
                     * @param _channelId 通道ID
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 自然语言查询
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     */
                    std::string m_summaryLang;
                    bool m_summaryLangHasBeenSet;

                    /**
                     * 通道ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEAISEARCHTASKASYNCREQUEST_H_
