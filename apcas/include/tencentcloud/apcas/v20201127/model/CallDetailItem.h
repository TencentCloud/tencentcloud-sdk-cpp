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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_CALLDETAILITEM_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_CALLDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 调用明细结构体
                */
                class CallDetailItem : public AbstractModel
                {
                public:
                    CallDetailItem();
                    ~CallDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据类型 0 imei 1 qimei 2 qq 3 phone 7:IDFA 8:MD5(imei)
                     * @return DataType 数据类型 0 imei 1 qimei 2 qq 3 phone 7:IDFA 8:MD5(imei)
                     * 
                     */
                    uint64_t GetDataType() const;

                    /**
                     * 设置数据类型 0 imei 1 qimei 2 qq 3 phone 7:IDFA 8:MD5(imei)
                     * @param _dataType 数据类型 0 imei 1 qimei 2 qq 3 phone 7:IDFA 8:MD5(imei)
                     * 
                     */
                    void SetDataType(const uint64_t& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取有效数据量
                     * @return ValidAmount 有效数据量
                     * 
                     */
                    uint64_t GetValidAmount() const;

                    /**
                     * 设置有效数据量
                     * @param _validAmount 有效数据量
                     * 
                     */
                    void SetValidAmount(const uint64_t& _validAmount);

                    /**
                     * 判断参数 ValidAmount 是否已赋值
                     * @return ValidAmount 是否已赋值
                     * 
                     */
                    bool ValidAmountHasBeenSet() const;

                    /**
                     * 获取调用时间
                     * @return Date 调用时间
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置调用时间
                     * @param _date 调用时间
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 数据类型 0 imei 1 qimei 2 qq 3 phone 7:IDFA 8:MD5(imei)
                     */
                    uint64_t m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 有效数据量
                     */
                    uint64_t m_validAmount;
                    bool m_validAmountHasBeenSet;

                    /**
                     * 调用时间
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_CALLDETAILITEM_H_
