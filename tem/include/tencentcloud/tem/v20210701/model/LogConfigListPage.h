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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGLISTPAGE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGLISTPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/LogConfig.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * LogConfig 列表结果
                */
                class LogConfigListPage : public AbstractModel
                {
                public:
                    LogConfigListPage();
                    ~LogConfigListPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录
                     * @return Records 记录
                     * 
                     */
                    std::vector<LogConfig> GetRecords() const;

                    /**
                     * 设置记录
                     * @param _records 记录
                     * 
                     */
                    void SetRecords(const std::vector<LogConfig>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取翻页游标
                     * @return ContinueToken 翻页游标
                     * 
                     */
                    std::string GetContinueToken() const;

                    /**
                     * 设置翻页游标
                     * @param _continueToken 翻页游标
                     * 
                     */
                    void SetContinueToken(const std::string& _continueToken);

                    /**
                     * 判断参数 ContinueToken 是否已赋值
                     * @return ContinueToken 是否已赋值
                     * 
                     */
                    bool ContinueTokenHasBeenSet() const;

                private:

                    /**
                     * 记录
                     */
                    std::vector<LogConfig> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 翻页游标
                     */
                    std::string m_continueToken;
                    bool m_continueTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGLISTPAGE_H_
