/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERMANAGEDRESOURCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERMANAGEDRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 扩展调度器(Extender)管理的扩展资源
                */
                class ExtenderManagedResource : public AbstractModel
                {
                public:
                    ExtenderManagedResource();
                    ~ExtenderManagedResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义资源的名称</p>
                     * @return Name <p>自定义资源的名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>自定义资源的名称</p>
                     * @param _name <p>自定义资源的名称</p>
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
                     * 获取<p>调度器是否忽略该资源的默认处理</p>
                     * @return IgnoredByScheduler <p>调度器是否忽略该资源的默认处理</p>
                     * 
                     */
                    bool GetIgnoredByScheduler() const;

                    /**
                     * 设置<p>调度器是否忽略该资源的默认处理</p>
                     * @param _ignoredByScheduler <p>调度器是否忽略该资源的默认处理</p>
                     * 
                     */
                    void SetIgnoredByScheduler(const bool& _ignoredByScheduler);

                    /**
                     * 判断参数 IgnoredByScheduler 是否已赋值
                     * @return IgnoredByScheduler 是否已赋值
                     * 
                     */
                    bool IgnoredBySchedulerHasBeenSet() const;

                private:

                    /**
                     * <p>自定义资源的名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>调度器是否忽略该资源的默认处理</p>
                     */
                    bool m_ignoredByScheduler;
                    bool m_ignoredBySchedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERMANAGEDRESOURCE_H_
