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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLEGROUPRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLEGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateTableGroup返回参数结构体
                */
                class CreateTableGroupResponse : public AbstractModel
                {
                public:
                    CreateTableGroupResponse();
                    ~CreateTableGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建成功的表格组ID
                     * @return TableGroupId 创建成功的表格组ID
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                private:

                    /**
                     * 创建成功的表格组ID
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLEGROUPRESPONSE_H_
