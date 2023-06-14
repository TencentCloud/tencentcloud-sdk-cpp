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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OPERATIONDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OPERATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/KeyValue.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 操作详情
                */
                class OperationDetail : public AbstractModel
                {
                public:
                    OperationDetail();
                    ~OperationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例原始配置信息
                     * @return OldInfo 实例原始配置信息
                     * 
                     */
                    std::vector<KeyValue> GetOldInfo() const;

                    /**
                     * 设置实例原始配置信息
                     * @param _oldInfo 实例原始配置信息
                     * 
                     */
                    void SetOldInfo(const std::vector<KeyValue>& _oldInfo);

                    /**
                     * 判断参数 OldInfo 是否已赋值
                     * @return OldInfo 是否已赋值
                     * 
                     */
                    bool OldInfoHasBeenSet() const;

                    /**
                     * 获取实例更新后配置信息
                     * @return NewInfo 实例更新后配置信息
                     * 
                     */
                    std::vector<KeyValue> GetNewInfo() const;

                    /**
                     * 设置实例更新后配置信息
                     * @param _newInfo 实例更新后配置信息
                     * 
                     */
                    void SetNewInfo(const std::vector<KeyValue>& _newInfo);

                    /**
                     * 判断参数 NewInfo 是否已赋值
                     * @return NewInfo 是否已赋值
                     * 
                     */
                    bool NewInfoHasBeenSet() const;

                private:

                    /**
                     * 实例原始配置信息
                     */
                    std::vector<KeyValue> m_oldInfo;
                    bool m_oldInfoHasBeenSet;

                    /**
                     * 实例更新后配置信息
                     */
                    std::vector<KeyValue> m_newInfo;
                    bool m_newInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPERATIONDETAIL_H_
