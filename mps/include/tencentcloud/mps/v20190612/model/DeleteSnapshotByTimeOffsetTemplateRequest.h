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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DELETESNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DELETESNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DeleteSnapshotByTimeOffsetTemplate请求参数结构体
                */
                class DeleteSnapshotByTimeOffsetTemplateRequest : public AbstractModel
                {
                public:
                    DeleteSnapshotByTimeOffsetTemplateRequest();
                    ~DeleteSnapshotByTimeOffsetTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定时间点截图模板唯一标识。
                     * @return Definition 指定时间点截图模板唯一标识。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置指定时间点截图模板唯一标识。
                     * @param _definition 指定时间点截图模板唯一标识。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * 指定时间点截图模板唯一标识。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DELETESNAPSHOTBYTIMEOFFSETTEMPLATEREQUEST_H_
