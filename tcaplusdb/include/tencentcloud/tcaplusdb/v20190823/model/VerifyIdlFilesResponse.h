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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ParsedTableInfoNew.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * VerifyIdlFiles返回参数结构体
                */
                class VerifyIdlFilesResponse : public AbstractModel
                {
                public:
                    VerifyIdlFilesResponse();
                    ~VerifyIdlFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次上传校验所有的IDL文件信息列表
                     * @return IdlFiles 本次上传校验所有的IDL文件信息列表
                     * 
                     */
                    std::vector<IdlFileInfo> GetIdlFiles() const;

                    /**
                     * 判断参数 IdlFiles 是否已赋值
                     * @return IdlFiles 是否已赋值
                     * 
                     */
                    bool IdlFilesHasBeenSet() const;

                    /**
                     * 获取读取IDL描述文件后解析出的合法表数量，不包含已经创建的表
                     * @return TotalCount 读取IDL描述文件后解析出的合法表数量，不包含已经创建的表
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取读取IDL描述文件后解析出的合法表列表，不包含已经创建的表
                     * @return TableInfos 读取IDL描述文件后解析出的合法表列表，不包含已经创建的表
                     * 
                     */
                    std::vector<ParsedTableInfoNew> GetTableInfos() const;

                    /**
                     * 判断参数 TableInfos 是否已赋值
                     * @return TableInfos 是否已赋值
                     * 
                     */
                    bool TableInfosHasBeenSet() const;

                private:

                    /**
                     * 本次上传校验所有的IDL文件信息列表
                     */
                    std::vector<IdlFileInfo> m_idlFiles;
                    bool m_idlFilesHasBeenSet;

                    /**
                     * 读取IDL描述文件后解析出的合法表数量，不包含已经创建的表
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 读取IDL描述文件后解析出的合法表列表，不包含已经创建的表
                     */
                    std::vector<ParsedTableInfoNew> m_tableInfos;
                    bool m_tableInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESRESPONSE_H_
