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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SNAPSHOTREMAINPOLICY_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SNAPSHOTREMAINPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 备份快照保留策略
                */
                class SnapshotRemainPolicy : public AbstractModel
                {
                public:
                    SnapshotRemainPolicy();
                    ~SnapshotRemainPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0-不主动删除；1-超过指定时间周期自动删除；2-保留指定数据快照
                     * @return Type 0-不主动删除；1-超过指定时间周期自动删除；2-保留指定数据快照
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0-不主动删除；1-超过指定时间周期自动删除；2-保留指定数据快照
                     * @param _type 0-不主动删除；1-超过指定时间周期自动删除；2-保留指定数据快照
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取保留快照的时间
                     * @return RemainDays 保留快照的时间
                     * 
                     */
                    int64_t GetRemainDays() const;

                    /**
                     * 设置保留快照的时间
                     * @param _remainDays 保留快照的时间
                     * 
                     */
                    void SetRemainDays(const int64_t& _remainDays);

                    /**
                     * 判断参数 RemainDays 是否已赋值
                     * @return RemainDays 是否已赋值
                     * 
                     */
                    bool RemainDaysHasBeenSet() const;

                    /**
                     * 获取保留最新快照的数量
                     * @return RemainLatestNum 保留最新快照的数量
                     * 
                     */
                    int64_t GetRemainLatestNum() const;

                    /**
                     * 设置保留最新快照的数量
                     * @param _remainLatestNum 保留最新快照的数量
                     * 
                     */
                    void SetRemainLatestNum(const int64_t& _remainLatestNum);

                    /**
                     * 判断参数 RemainLatestNum 是否已赋值
                     * @return RemainLatestNum 是否已赋值
                     * 
                     */
                    bool RemainLatestNumHasBeenSet() const;

                private:

                    /**
                     * 0-不主动删除；1-超过指定时间周期自动删除；2-保留指定数据快照
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 保留快照的时间
                     */
                    int64_t m_remainDays;
                    bool m_remainDaysHasBeenSet;

                    /**
                     * 保留最新快照的数量
                     */
                    int64_t m_remainLatestNum;
                    bool m_remainLatestNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SNAPSHOTREMAINPOLICY_H_
