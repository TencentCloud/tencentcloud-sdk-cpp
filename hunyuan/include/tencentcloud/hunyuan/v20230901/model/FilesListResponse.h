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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESLISTRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/FileObject.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * FilesList返回参数结构体
                */
                class FilesListResponse : public AbstractModel
                {
                public:
                    FilesListResponse();
                    ~FilesListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件数量。
                     * @return Total 文件数量。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取对象类型，始终为 list。
                     * @return Object 对象类型，始终为 list。
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取FileObject 列表。
                     * @return Data FileObject 列表。
                     * 
                     */
                    std::vector<FileObject> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 文件数量。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 对象类型，始终为 list。
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * FileObject 列表。
                     */
                    std::vector<FileObject> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESLISTRESPONSE_H_
