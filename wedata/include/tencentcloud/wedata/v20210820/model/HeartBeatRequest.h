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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_HEARTBEATREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_HEARTBEATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * HeartBeat请求参数结构体
                */
                class HeartBeatRequest : public AbstractModel
                {
                public:
                    HeartBeatRequest();
                    ~HeartBeatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源唯一路径
                     * @return ResourcePath 资源唯一路径
                     * 
                     */
                    std::string GetResourcePath() const;

                    /**
                     * 设置资源唯一路径
                     * @param _resourcePath 资源唯一路径
                     * 
                     */
                    void SetResourcePath(const std::string& _resourcePath);

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                    /**
                     * 获取编辑标志
                     * @return EditFlag 编辑标志
                     * 
                     */
                    bool GetEditFlag() const;

                    /**
                     * 设置编辑标志
                     * @param _editFlag 编辑标志
                     * 
                     */
                    void SetEditFlag(const bool& _editFlag);

                    /**
                     * 判断参数 EditFlag 是否已赋值
                     * @return EditFlag 是否已赋值
                     * 
                     */
                    bool EditFlagHasBeenSet() const;

                private:

                    /**
                     * 资源唯一路径
                     */
                    std::string m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                    /**
                     * 编辑标志
                     */
                    bool m_editFlag;
                    bool m_editFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_HEARTBEATREQUEST_H_
