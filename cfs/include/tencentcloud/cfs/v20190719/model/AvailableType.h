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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/AvailableProtoStatus.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 版本控制-类型数组
                */
                class AvailableType : public AbstractModel
                {
                public:
                    AvailableType();
                    ~AvailableType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议与售卖详情
                     * @return Protocols 协议与售卖详情
                     * 
                     */
                    std::vector<AvailableProtoStatus> GetProtocols() const;

                    /**
                     * 设置协议与售卖详情
                     * @param _protocols 协议与售卖详情
                     * 
                     */
                    void SetProtocols(const std::vector<AvailableProtoStatus>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     * @return Type 存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     * @param _type 存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否支持预付费。返回值中 true 为支持、false 为不支持
                     * @return Prepayment 是否支持预付费。返回值中 true 为支持、false 为不支持
                     * 
                     */
                    bool GetPrepayment() const;

                    /**
                     * 设置是否支持预付费。返回值中 true 为支持、false 为不支持
                     * @param _prepayment 是否支持预付费。返回值中 true 为支持、false 为不支持
                     * 
                     */
                    void SetPrepayment(const bool& _prepayment);

                    /**
                     * 判断参数 Prepayment 是否已赋值
                     * @return Prepayment 是否已赋值
                     * 
                     */
                    bool PrepaymentHasBeenSet() const;

                private:

                    /**
                     * 协议与售卖详情
                     */
                    std::vector<AvailableProtoStatus> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * 存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否支持预付费。返回值中 true 为支持、false 为不支持
                     */
                    bool m_prepayment;
                    bool m_prepaymentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_
