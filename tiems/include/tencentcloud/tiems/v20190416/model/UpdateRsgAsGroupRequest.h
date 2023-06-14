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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_UPDATERSGASGROUPREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_UPDATERSGASGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * UpdateRsgAsGroup请求参数结构体
                */
                class UpdateRsgAsGroupRequest : public AbstractModel
                {
                public:
                    UpdateRsgAsGroupRequest();
                    ~UpdateRsgAsGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组 ID
                     * @return Id 伸缩组 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置伸缩组 ID
                     * @param _id 伸缩组 ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取重命名名称
                     * @return Name 重命名名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置重命名名称
                     * @param _name 重命名名称
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
                     * 获取伸缩组最大节点数
                     * @return MaxSize 伸缩组最大节点数
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置伸缩组最大节点数
                     * @param _maxSize 伸缩组最大节点数
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取伸缩组最小节点数
                     * @return MinSize 伸缩组最小节点数
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置伸缩组最小节点数
                     * @param _minSize 伸缩组最小节点数
                     * 
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取伸缩组期望的节点数
                     * @return DesiredSize 伸缩组期望的节点数
                     * 
                     */
                    uint64_t GetDesiredSize() const;

                    /**
                     * 设置伸缩组期望的节点数
                     * @param _desiredSize 伸缩组期望的节点数
                     * 
                     */
                    void SetDesiredSize(const uint64_t& _desiredSize);

                    /**
                     * 判断参数 DesiredSize 是否已赋值
                     * @return DesiredSize 是否已赋值
                     * 
                     */
                    bool DesiredSizeHasBeenSet() const;

                private:

                    /**
                     * 伸缩组 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 重命名名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 伸缩组最大节点数
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 伸缩组最小节点数
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 伸缩组期望的节点数
                     */
                    uint64_t m_desiredSize;
                    bool m_desiredSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_UPDATERSGASGROUPREQUEST_H_
