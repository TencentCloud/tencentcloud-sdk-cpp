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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_LIFECYCLE_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_LIFECYCLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20230508/model/LifeCycleCommand.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20230508
        {
            namespace Model
            {
                /**
                * 工作空间生命周期自动执行脚本
                */
                class LifeCycle : public AbstractModel
                {
                public:
                    LifeCycle();
                    ~LifeCycle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间首次初始化时执行
                     * @return Init 工作空间首次初始化时执行
                     * 
                     */
                    std::vector<LifeCycleCommand> GetInit() const;

                    /**
                     * 设置工作空间首次初始化时执行
                     * @param _init 工作空间首次初始化时执行
                     * 
                     */
                    void SetInit(const std::vector<LifeCycleCommand>& _init);

                    /**
                     * 判断参数 Init 是否已赋值
                     * @return Init 是否已赋值
                     * 
                     */
                    bool InitHasBeenSet() const;

                    /**
                     * 获取每次工作空间启动时执行
                     * @return Start 每次工作空间启动时执行
                     * 
                     */
                    std::vector<LifeCycleCommand> GetStart() const;

                    /**
                     * 设置每次工作空间启动时执行
                     * @param _start 每次工作空间启动时执行
                     * 
                     */
                    void SetStart(const std::vector<LifeCycleCommand>& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取每次工作空间关闭时执行
                     * @return Destroy 每次工作空间关闭时执行
                     * 
                     */
                    std::vector<LifeCycleCommand> GetDestroy() const;

                    /**
                     * 设置每次工作空间关闭时执行
                     * @param _destroy 每次工作空间关闭时执行
                     * 
                     */
                    void SetDestroy(const std::vector<LifeCycleCommand>& _destroy);

                    /**
                     * 判断参数 Destroy 是否已赋值
                     * @return Destroy 是否已赋值
                     * 
                     */
                    bool DestroyHasBeenSet() const;

                private:

                    /**
                     * 工作空间首次初始化时执行
                     */
                    std::vector<LifeCycleCommand> m_init;
                    bool m_initHasBeenSet;

                    /**
                     * 每次工作空间启动时执行
                     */
                    std::vector<LifeCycleCommand> m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 每次工作空间关闭时执行
                     */
                    std::vector<LifeCycleCommand> m_destroy;
                    bool m_destroyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_LIFECYCLE_H_
