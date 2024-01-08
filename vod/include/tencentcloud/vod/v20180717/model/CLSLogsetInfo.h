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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLSLOGSETINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLSLOGSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CLS 日志集信息
                */
                class CLSLogsetInfo : public AbstractModel
                {
                public:
                    CLSLogsetInfo();
                    ~CLSLogsetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志集 ID。
                     * @return LogsetId 日志集 ID。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集 ID。
                     * @param _logsetId 日志集 ID。
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志集名。
                     * @return LogsetName 日志集名。
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集名。
                     * @param _logsetName 日志集名。
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                private:

                    /**
                     * 日志集 ID。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志集名。
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLSLOGSETINFO_H_
