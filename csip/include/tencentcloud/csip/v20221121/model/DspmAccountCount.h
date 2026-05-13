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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCOUNTCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCOUNTCOUNT_H_

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
                * Dspm 账号统计数
                */
                class DspmAccountCount : public AbstractModel
                {
                public:
                    DspmAccountCount();
                    ~DspmAccountCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云账号个数
                     * @return UinAccountCount 云账号个数
                     * 
                     */
                    int64_t GetUinAccountCount() const;

                    /**
                     * 设置云账号个数
                     * @param _uinAccountCount 云账号个数
                     * 
                     */
                    void SetUinAccountCount(const int64_t& _uinAccountCount);

                    /**
                     * 判断参数 UinAccountCount 是否已赋值
                     * @return UinAccountCount 是否已赋值
                     * 
                     */
                    bool UinAccountCountHasBeenSet() const;

                    /**
                     * 获取访客账号个数
                     * @return PersonCount 访客账号个数
                     * 
                     */
                    int64_t GetPersonCount() const;

                    /**
                     * 设置访客账号个数
                     * @param _personCount 访客账号个数
                     * 
                     */
                    void SetPersonCount(const int64_t& _personCount);

                    /**
                     * 判断参数 PersonCount 是否已赋值
                     * @return PersonCount 是否已赋值
                     * 
                     */
                    bool PersonCountHasBeenSet() const;

                    /**
                     * 获取未管控账号个数
                     * @return UncontrolledAccountCount 未管控账号个数
                     * 
                     */
                    int64_t GetUncontrolledAccountCount() const;

                    /**
                     * 设置未管控账号个数
                     * @param _uncontrolledAccountCount 未管控账号个数
                     * 
                     */
                    void SetUncontrolledAccountCount(const int64_t& _uncontrolledAccountCount);

                    /**
                     * 判断参数 UncontrolledAccountCount 是否已赋值
                     * @return UncontrolledAccountCount 是否已赋值
                     * 
                     */
                    bool UncontrolledAccountCountHasBeenSet() const;

                    /**
                     * 获取总账号个数
                     * @return TotalAccountCount 总账号个数
                     * 
                     */
                    int64_t GetTotalAccountCount() const;

                    /**
                     * 设置总账号个数
                     * @param _totalAccountCount 总账号个数
                     * 
                     */
                    void SetTotalAccountCount(const int64_t& _totalAccountCount);

                    /**
                     * 判断参数 TotalAccountCount 是否已赋值
                     * @return TotalAccountCount 是否已赋值
                     * 
                     */
                    bool TotalAccountCountHasBeenSet() const;

                private:

                    /**
                     * 云账号个数
                     */
                    int64_t m_uinAccountCount;
                    bool m_uinAccountCountHasBeenSet;

                    /**
                     * 访客账号个数
                     */
                    int64_t m_personCount;
                    bool m_personCountHasBeenSet;

                    /**
                     * 未管控账号个数
                     */
                    int64_t m_uncontrolledAccountCount;
                    bool m_uncontrolledAccountCountHasBeenSet;

                    /**
                     * 总账号个数
                     */
                    int64_t m_totalAccountCount;
                    bool m_totalAccountCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCOUNTCOUNT_H_
