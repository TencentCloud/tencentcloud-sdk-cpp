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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_POSTTRAININGRESOURCES_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_POSTTRAININGRESOURCES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/HeadSpecDTO.h>
#include <tencentcloud/dlc/v20210125/model/WorkerSpecDTO.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 后训练资源规格配置
                */
                class PostTrainingResources : public AbstractModel
                {
                public:
                    PostTrainingResources();
                    ~PostTrainingResources() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Head 节点资源规格</p>
                     * @return Head <p>Head 节点资源规格</p>
                     * 
                     */
                    HeadSpecDTO GetHead() const;

                    /**
                     * 设置<p>Head 节点资源规格</p>
                     * @param _head <p>Head 节点资源规格</p>
                     * 
                     */
                    void SetHead(const HeadSpecDTO& _head);

                    /**
                     * 判断参数 Head 是否已赋值
                     * @return Head 是否已赋值
                     * 
                     */
                    bool HeadHasBeenSet() const;

                    /**
                     * 获取<p>Worker 节点资源规格</p>
                     * @return Worker <p>Worker 节点资源规格</p>
                     * 
                     */
                    std::vector<WorkerSpecDTO> GetWorker() const;

                    /**
                     * 设置<p>Worker 节点资源规格</p>
                     * @param _worker <p>Worker 节点资源规格</p>
                     * 
                     */
                    void SetWorker(const std::vector<WorkerSpecDTO>& _worker);

                    /**
                     * 判断参数 Worker 是否已赋值
                     * @return Worker 是否已赋值
                     * 
                     */
                    bool WorkerHasBeenSet() const;

                private:

                    /**
                     * <p>Head 节点资源规格</p>
                     */
                    HeadSpecDTO m_head;
                    bool m_headHasBeenSet;

                    /**
                     * <p>Worker 节点资源规格</p>
                     */
                    std::vector<WorkerSpecDTO> m_worker;
                    bool m_workerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_POSTTRAININGRESOURCES_H_
