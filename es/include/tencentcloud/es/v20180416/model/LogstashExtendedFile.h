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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHEXTENDEDFILE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHEXTENDEDFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Logstash扩展文件信息
                */
                class LogstashExtendedFile : public AbstractModel
                {
                public:
                    LogstashExtendedFile();
                    ~LogstashExtendedFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩展文件名称
                     * @return Name 扩展文件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置扩展文件名称
                     * @param _name 扩展文件名称
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
                     * 获取扩展文件大小，单位B
                     * @return Size 扩展文件大小，单位B
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置扩展文件大小，单位B
                     * @param _size 扩展文件大小，单位B
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 扩展文件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 扩展文件大小，单位B
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHEXTENDEDFILE_H_
