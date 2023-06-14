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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCEWEIGHTPAIR_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCEWEIGHTPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 只读实例与权重对应关系
                */
                class ReadOnlyInstanceWeightPair : public AbstractModel
                {
                public:
                    ReadOnlyInstanceWeightPair();
                    ~ReadOnlyInstanceWeightPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取只读实例ID，格式如：mssqlro-3l3fgqn7
                     * @return ReadOnlyInstanceId 只读实例ID，格式如：mssqlro-3l3fgqn7
                     * 
                     */
                    std::string GetReadOnlyInstanceId() const;

                    /**
                     * 设置只读实例ID，格式如：mssqlro-3l3fgqn7
                     * @param _readOnlyInstanceId 只读实例ID，格式如：mssqlro-3l3fgqn7
                     * 
                     */
                    void SetReadOnlyInstanceId(const std::string& _readOnlyInstanceId);

                    /**
                     * 判断参数 ReadOnlyInstanceId 是否已赋值
                     * @return ReadOnlyInstanceId 是否已赋值
                     * 
                     */
                    bool ReadOnlyInstanceIdHasBeenSet() const;

                    /**
                     * 获取只读实例权重 ，范围是0-100
                     * @return ReadOnlyWeight 只读实例权重 ，范围是0-100
                     * 
                     */
                    int64_t GetReadOnlyWeight() const;

                    /**
                     * 设置只读实例权重 ，范围是0-100
                     * @param _readOnlyWeight 只读实例权重 ，范围是0-100
                     * 
                     */
                    void SetReadOnlyWeight(const int64_t& _readOnlyWeight);

                    /**
                     * 判断参数 ReadOnlyWeight 是否已赋值
                     * @return ReadOnlyWeight 是否已赋值
                     * 
                     */
                    bool ReadOnlyWeightHasBeenSet() const;

                private:

                    /**
                     * 只读实例ID，格式如：mssqlro-3l3fgqn7
                     */
                    std::string m_readOnlyInstanceId;
                    bool m_readOnlyInstanceIdHasBeenSet;

                    /**
                     * 只读实例权重 ，范围是0-100
                     */
                    int64_t m_readOnlyWeight;
                    bool m_readOnlyWeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCEWEIGHTPAIR_H_
