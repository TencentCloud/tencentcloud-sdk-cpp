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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_LOGDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_LOGDETAIL_H_

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
                * 智能运维日志详情
                */
                class LogDetail : public AbstractModel
                {
                public:
                    LogDetail();
                    ~LogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志异常名
                     * @return Key 日志异常名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置日志异常名
                     * @param _key 日志异常名
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取日志异常处理建议
                     * @return Advise 日志异常处理建议
                     * 
                     */
                    std::string GetAdvise() const;

                    /**
                     * 设置日志异常处理建议
                     * @param _advise 日志异常处理建议
                     * 
                     */
                    void SetAdvise(const std::string& _advise);

                    /**
                     * 判断参数 Advise 是否已赋值
                     * @return Advise 是否已赋值
                     * 
                     */
                    bool AdviseHasBeenSet() const;

                    /**
                     * 获取日志异常名出现次数
                     * @return Count 日志异常名出现次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置日志异常名出现次数
                     * @param _count 日志异常名出现次数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 日志异常名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 日志异常处理建议
                     */
                    std::string m_advise;
                    bool m_adviseHasBeenSet;

                    /**
                     * 日志异常名出现次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_LOGDETAIL_H_
