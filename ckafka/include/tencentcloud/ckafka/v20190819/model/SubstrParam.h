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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SUBSTRPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SUBSTRPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 数据处理——Value处理参数——截取参数
                */
                class SubstrParam : public AbstractModel
                {
                public:
                    SubstrParam();
                    ~SubstrParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取截取起始位置
                     * @return Start 截取起始位置
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置截取起始位置
                     * @param _start 截取起始位置
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取截取截止位置
                     * @return End 截取截止位置
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置截取截止位置
                     * @param _end 截取截止位置
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * 截取起始位置
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 截取截止位置
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SUBSTRPARAM_H_
