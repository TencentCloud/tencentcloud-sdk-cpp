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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_BATCHUPDATESHADOW_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_BATCHUPDATESHADOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * 批量更新设备影子任务
                */
                class BatchUpdateShadow : public AbstractModel
                {
                public:
                    BatchUpdateShadow();
                    ~BatchUpdateShadow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备影子的期望状态，格式为 Json 对象序列化之后的字符串
                     * @return Desired 设备影子的期望状态，格式为 Json 对象序列化之后的字符串
                     * 
                     */
                    std::string GetDesired() const;

                    /**
                     * 设置设备影子的期望状态，格式为 Json 对象序列化之后的字符串
                     * @param _desired 设备影子的期望状态，格式为 Json 对象序列化之后的字符串
                     * 
                     */
                    void SetDesired(const std::string& _desired);

                    /**
                     * 判断参数 Desired 是否已赋值
                     * @return Desired 是否已赋值
                     * 
                     */
                    bool DesiredHasBeenSet() const;

                private:

                    /**
                     * 设备影子的期望状态，格式为 Json 对象序列化之后的字符串
                     */
                    std::string m_desired;
                    bool m_desiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_BATCHUPDATESHADOW_H_
