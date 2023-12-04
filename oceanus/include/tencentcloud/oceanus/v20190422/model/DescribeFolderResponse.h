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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEFOLDERRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEFOLDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/SubFolderInfo.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeFolder返回参数结构体
                */
                class DescribeFolderResponse : public AbstractModel
                {
                public:
                    DescribeFolderResponse();
                    ~DescribeFolderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取folder id
                     * @return FolderId folder id
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取folder name
                     * @return FolderName folder name
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取父文件夹id
                     * @return ParentId 父文件夹id
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取文件夹类型
                     * @return FolderType 文件夹类型
                     * 
                     */
                    int64_t GetFolderType() const;

                    /**
                     * 判断参数 FolderType 是否已赋值
                     * @return FolderType 是否已赋值
                     * 
                     */
                    bool FolderTypeHasBeenSet() const;

                    /**
                     * 获取workspace id
                     * @return WorkSpaceId workspace id
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取子文件夹信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubFolderInfo 子文件夹信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SubFolderInfo> GetSubFolderInfo() const;

                    /**
                     * 判断参数 SubFolderInfo 是否已赋值
                     * @return SubFolderInfo 是否已赋值
                     * 
                     */
                    bool SubFolderInfoHasBeenSet() const;

                private:

                    /**
                     * folder id
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * folder name
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 父文件夹id
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 文件夹类型
                     */
                    int64_t m_folderType;
                    bool m_folderTypeHasBeenSet;

                    /**
                     * workspace id
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 子文件夹信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubFolderInfo> m_subFolderInfo;
                    bool m_subFolderInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEFOLDERRESPONSE_H_
