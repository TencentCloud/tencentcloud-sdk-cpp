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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETEALLJAVAMEMSHELLSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETEALLJAVAMEMSHELLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteAllJavaMemShells请求参数结构体
                */
                class DeleteAllJavaMemShellsRequest : public AbstractModel
                {
                public:
                    DeleteAllJavaMemShellsRequest();
                    ~DeleteAllJavaMemShellsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器quuid
                     * @return Quuid 服务器quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置服务器quuid
                     * @param _quuid 服务器quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 服务器quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETEALLJAVAMEMSHELLSREQUEST_H_
