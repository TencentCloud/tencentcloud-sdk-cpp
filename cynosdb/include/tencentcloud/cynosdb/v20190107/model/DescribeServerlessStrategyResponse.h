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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESERVERLESSSTRATEGYRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESERVERLESSSTRATEGYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeServerlessStrategy返回参数结构体
                */
                class DescribeServerlessStrategyResponse : public AbstractModel
                {
                public:
                    DescribeServerlessStrategyResponse();
                    ~DescribeServerlessStrategyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取cpu负载为 0 时持续多久（秒）发起自动暂停
                     * @return AutoPauseDelay cpu负载为 0 时持续多久（秒）发起自动暂停
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     * 
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取cpu负载超过当前规格核数时，持续多久（秒）发起自动扩容
                     * @return AutoScaleUpDelay cpu负载超过当前规格核数时，持续多久（秒）发起自动扩容
                     * 
                     */
                    int64_t GetAutoScaleUpDelay() const;

                    /**
                     * 判断参数 AutoScaleUpDelay 是否已赋值
                     * @return AutoScaleUpDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleUpDelayHasBeenSet() const;

                    /**
                     * 获取cpu 负载低于低一级规格核数时，持续多久（秒）发起自动缩容
                     * @return AutoScaleDownDelay cpu 负载低于低一级规格核数时，持续多久（秒）发起自动缩容
                     * 
                     */
                    int64_t GetAutoScaleDownDelay() const;

                    /**
                     * 判断参数 AutoScaleDownDelay 是否已赋值
                     * @return AutoScaleDownDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleDownDelayHasBeenSet() const;

                    /**
                     * 获取是否自动暂停，可能值：
yes
no
                     * @return AutoPause 是否自动暂停，可能值：
yes
no
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取集群是否允许向上扩容，可选范围<li>yes</li><li>no</li>
                     * @return AutoScaleUp 集群是否允许向上扩容，可选范围<li>yes</li><li>no</li>
                     * 
                     */
                    std::string GetAutoScaleUp() const;

                    /**
                     * 判断参数 AutoScaleUp 是否已赋值
                     * @return AutoScaleUp 是否已赋值
                     * 
                     */
                    bool AutoScaleUpHasBeenSet() const;

                    /**
                     * 获取集群是否允许向下缩容，可选范围<li>yes</li><li>no</li>
                     * @return AutoScaleDown 集群是否允许向下缩容，可选范围<li>yes</li><li>no</li>
                     * 
                     */
                    std::string GetAutoScaleDown() const;

                    /**
                     * 判断参数 AutoScaleDown 是否已赋值
                     * @return AutoScaleDown 是否已赋值
                     * 
                     */
                    bool AutoScaleDownHasBeenSet() const;

                    /**
                     * 获取是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * @return AutoArchive 是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                private:

                    /**
                     * cpu负载为 0 时持续多久（秒）发起自动暂停
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * cpu负载超过当前规格核数时，持续多久（秒）发起自动扩容
                     */
                    int64_t m_autoScaleUpDelay;
                    bool m_autoScaleUpDelayHasBeenSet;

                    /**
                     * cpu 负载低于低一级规格核数时，持续多久（秒）发起自动缩容
                     */
                    int64_t m_autoScaleDownDelay;
                    bool m_autoScaleDownDelayHasBeenSet;

                    /**
                     * 是否自动暂停，可能值：
yes
no
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * 集群是否允许向上扩容，可选范围<li>yes</li><li>no</li>
                     */
                    std::string m_autoScaleUp;
                    bool m_autoScaleUpHasBeenSet;

                    /**
                     * 集群是否允许向下缩容，可选范围<li>yes</li><li>no</li>
                     */
                    std::string m_autoScaleDown;
                    bool m_autoScaleDownHasBeenSet;

                    /**
                     * 是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESERVERLESSSTRATEGYRESPONSE_H_
