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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_KEYVALUERECORD_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_KEYVALUERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValue.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * KeyValue记录
                */
                class KeyValueRecord : public AbstractModel
                {
                public:
                    KeyValueRecord();
                    ~KeyValueRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一条记录的Key-Value数组
                     * @return Record 一条记录的Key-Value数组
                     * 
                     */
                    std::vector<KeyValue> GetRecord() const;

                    /**
                     * 设置一条记录的Key-Value数组
                     * @param _record 一条记录的Key-Value数组
                     * 
                     */
                    void SetRecord(const std::vector<KeyValue>& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                private:

                    /**
                     * 一条记录的Key-Value数组
                     */
                    std::vector<KeyValue> m_record;
                    bool m_recordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_KEYVALUERECORD_H_
