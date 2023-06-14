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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DELETEUSERCMDSREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DELETEUSERCMDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DeleteUserCmds请求参数结构体
                */
                class DeleteUserCmdsRequest : public AbstractModel
                {
                public:
                    DeleteUserCmdsRequest();
                    ~DeleteUserCmdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的脚本ID
                     * @return CmdIds 需要删除的脚本ID
                     * 
                     */
                    std::vector<std::string> GetCmdIds() const;

                    /**
                     * 设置需要删除的脚本ID
                     * @param _cmdIds 需要删除的脚本ID
                     * 
                     */
                    void SetCmdIds(const std::vector<std::string>& _cmdIds);

                    /**
                     * 判断参数 CmdIds 是否已赋值
                     * @return CmdIds 是否已赋值
                     * 
                     */
                    bool CmdIdsHasBeenSet() const;

                private:

                    /**
                     * 需要删除的脚本ID
                     */
                    std::vector<std::string> m_cmdIds;
                    bool m_cmdIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DELETEUSERCMDSREQUEST_H_
