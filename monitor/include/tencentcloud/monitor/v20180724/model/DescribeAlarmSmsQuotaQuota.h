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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMSMSQUOTAQUOTA_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMSMSQUOTAQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmSmsQuota接口的配额信息
                */
                class DescribeAlarmSmsQuotaQuota : public AbstractModel
                {
                public:
                    DescribeAlarmSmsQuotaQuota();
                    ~DescribeAlarmSmsQuotaQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配额类型
                     * @return Type 配额类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置配额类型
                     * @param _type 配额类型
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
                     * 获取配额名称
                     * @return Name 配额名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配额名称
                     * @param _name 配额名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取免费配额剩余量
                     * @return FreeLeft 免费配额剩余量
                     * 
                     */
                    int64_t GetFreeLeft() const;

                    /**
                     * 设置免费配额剩余量
                     * @param _freeLeft 免费配额剩余量
                     * 
                     */
                    void SetFreeLeft(const int64_t& _freeLeft);

                    /**
                     * 判断参数 FreeLeft 是否已赋值
                     * @return FreeLeft 是否已赋值
                     * 
                     */
                    bool FreeLeftHasBeenSet() const;

                    /**
                     * 获取付费配额剩余量
                     * @return PurchaseLeft 付费配额剩余量
                     * 
                     */
                    int64_t GetPurchaseLeft() const;

                    /**
                     * 设置付费配额剩余量
                     * @param _purchaseLeft 付费配额剩余量
                     * 
                     */
                    void SetPurchaseLeft(const int64_t& _purchaseLeft);

                    /**
                     * 判断参数 PurchaseLeft 是否已赋值
                     * @return PurchaseLeft 是否已赋值
                     * 
                     */
                    bool PurchaseLeftHasBeenSet() const;

                    /**
                     * 获取已使用量
                     * @return Used 已使用量
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 设置已使用量
                     * @param _used 已使用量
                     * 
                     */
                    void SetUsed(const int64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * 配额类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 配额名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 免费配额剩余量
                     */
                    int64_t m_freeLeft;
                    bool m_freeLeftHasBeenSet;

                    /**
                     * 付费配额剩余量
                     */
                    int64_t m_purchaseLeft;
                    bool m_purchaseLeftHasBeenSet;

                    /**
                     * 已使用量
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMSMSQUOTAQUOTA_H_
