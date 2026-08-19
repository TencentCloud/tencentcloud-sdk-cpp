/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSETRENDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSETRENDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 暴露趋势周期统计数量信息
                */
                class ExposeTrendItem : public AbstractModel
                {
                public:
                    ExposeTrendItem();
                    ~ExposeTrendItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取完全开放数量
                     * @return OpenCount 完全开放数量
                     * 
                     */
                    uint64_t GetOpenCount() const;

                    /**
                     * 设置完全开放数量
                     * @param _openCount 完全开放数量
                     * 
                     */
                    void SetOpenCount(const uint64_t& _openCount);

                    /**
                     * 判断参数 OpenCount 是否已赋值
                     * @return OpenCount 是否已赋值
                     * 
                     */
                    bool OpenCountHasBeenSet() const;

                    /**
                     * 获取受限访问数量
                     * @return AclCount 受限访问数量
                     * 
                     */
                    uint64_t GetAclCount() const;

                    /**
                     * 设置受限访问数量
                     * @param _aclCount 受限访问数量
                     * 
                     */
                    void SetAclCount(const uint64_t& _aclCount);

                    /**
                     * 判断参数 AclCount 是否已赋值
                     * @return AclCount 是否已赋值
                     * 
                     */
                    bool AclCountHasBeenSet() const;

                    /**
                     * 获取无法访问数量
                     * @return CloseCount 无法访问数量
                     * 
                     */
                    uint64_t GetCloseCount() const;

                    /**
                     * 设置无法访问数量
                     * @param _closeCount 无法访问数量
                     * 
                     */
                    void SetCloseCount(const uint64_t& _closeCount);

                    /**
                     * 判断参数 CloseCount 是否已赋值
                     * @return CloseCount 是否已赋值
                     * 
                     */
                    bool CloseCountHasBeenSet() const;

                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
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
                     * 完全开放数量
                     */
                    uint64_t m_openCount;
                    bool m_openCountHasBeenSet;

                    /**
                     * 受限访问数量
                     */
                    uint64_t m_aclCount;
                    bool m_aclCountHasBeenSet;

                    /**
                     * 无法访问数量
                     */
                    uint64_t m_closeCount;
                    bool m_closeCountHasBeenSet;

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSETRENDITEM_H_
