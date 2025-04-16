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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERINDEXPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERINDEXPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SmartOptimizerIndexPolicy
                */
                class SmartOptimizerIndexPolicy : public AbstractModel
                {
                public:
                    SmartOptimizerIndexPolicy();
                    ~SmartOptimizerIndexPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开启索引
                     * @return IndexEnable 开启索引
                     * 
                     */
                    std::string GetIndexEnable() const;

                    /**
                     * 设置开启索引
                     * @param _indexEnable 开启索引
                     * 
                     */
                    void SetIndexEnable(const std::string& _indexEnable);

                    /**
                     * 判断参数 IndexEnable 是否已赋值
                     * @return IndexEnable 是否已赋值
                     * 
                     */
                    bool IndexEnableHasBeenSet() const;

                private:

                    /**
                     * 开启索引
                     */
                    std::string m_indexEnable;
                    bool m_indexEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERINDEXPOLICY_H_
