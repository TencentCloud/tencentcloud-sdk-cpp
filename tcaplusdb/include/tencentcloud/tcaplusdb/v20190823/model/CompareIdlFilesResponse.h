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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPAREIDLFILESRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPAREIDLFILESRESPONSE_H_

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
                * CompareIdlFiles返回参数结构体
                */
                class CompareIdlFilesResponse : public AbstractModel
                {
                public:
                    CompareIdlFilesResponse();
                    ~CompareIdlFilesResponse() = default;
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
                     * 获取本次校验合法的表格数量
                     * @return TotalCount 本次校验合法的表格数量
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
                     * 获取读取IDL描述文件后,根据用户指示的所选中表格解析校验结果
                     * @return TableInfos 读取IDL描述文件后,根据用户指示的所选中表格解析校验结果
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
                     * 本次校验合法的表格数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 读取IDL描述文件后,根据用户指示的所选中表格解析校验结果
                     */
                    std::vector<ParsedTableInfoNew> m_tableInfos;
                    bool m_tableInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPAREIDLFILESRESPONSE_H_
