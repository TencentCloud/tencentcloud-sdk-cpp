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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKJOBSPECNAMEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKJOBSPECNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CheckJobSpecName请求参数结构体
                */
                class CheckJobSpecNameRequest : public AbstractModel
                {
                public:
                    CheckJobSpecNameRequest();
                    ~CheckJobSpecNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>训练作业配置名</p>
                     * @return SpecName <p>训练作业配置名</p>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>训练作业配置名</p>
                     * @param _specName <p>训练作业配置名</p>
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取<p>排除的配置 ID（编辑场景排除自己；创建场景不传）</p>
                     * @return SpecId <p>排除的配置 ID（编辑场景排除自己；创建场景不传）</p>
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>排除的配置 ID（编辑场景排除自己；创建场景不传）</p>
                     * @param _specId <p>排除的配置 ID（编辑场景排除自己；创建场景不传）</p>
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                private:

                    /**
                     * <p>训练作业配置名</p>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>排除的配置 ID（编辑场景排除自己；创建场景不传）</p>
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKJOBSPECNAMEREQUEST_H_
