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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_OPERATETWESEEDIRECTUPLOADOBJECTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_OPERATETWESEEDIRECTUPLOADOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeObjectListOptions.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * OperateTWeSeeDirectUploadObject请求参数结构体
                */
                class OperateTWeSeeDirectUploadObjectRequest : public AbstractModel
                {
                public:
                    OperateTWeSeeDirectUploadObjectRequest();
                    ~OperateTWeSeeDirectUploadObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TWeSee 直传对象或目录的 COS URI
                     * @return COSURI TWeSee 直传对象或目录的 COS URI
                     * 
                     */
                    std::string GetCOSURI() const;

                    /**
                     * 设置TWeSee 直传对象或目录的 COS URI
                     * @param _cOSURI TWeSee 直传对象或目录的 COS URI
                     * 
                     */
                    void SetCOSURI(const std::string& _cOSURI);

                    /**
                     * 判断参数 COSURI 是否已赋值
                     * @return COSURI 是否已赋值
                     * 
                     */
                    bool COSURIHasBeenSet() const;

                    /**
                     * 获取操作类型。可选值：

- `HeadObject`：查询对象元数据
- `DeleteObject`：删除对象
- `ListBucket`：列举对象
                     * @return Operation 操作类型。可选值：

- `HeadObject`：查询对象元数据
- `DeleteObject`：删除对象
- `ListBucket`：列举对象
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型。可选值：

- `HeadObject`：查询对象元数据
- `DeleteObject`：删除对象
- `ListBucket`：列举对象
                     * @param _operation 操作类型。可选值：

- `HeadObject`：查询对象元数据
- `DeleteObject`：删除对象
- `ListBucket`：列举对象
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取列举对象时使用的分页和目录选项
                     * @return ListOptions 列举对象时使用的分页和目录选项
                     * 
                     */
                    SeeObjectListOptions GetListOptions() const;

                    /**
                     * 设置列举对象时使用的分页和目录选项
                     * @param _listOptions 列举对象时使用的分页和目录选项
                     * 
                     */
                    void SetListOptions(const SeeObjectListOptions& _listOptions);

                    /**
                     * 判断参数 ListOptions 是否已赋值
                     * @return ListOptions 是否已赋值
                     * 
                     */
                    bool ListOptionsHasBeenSet() const;

                private:

                    /**
                     * TWeSee 直传对象或目录的 COS URI
                     */
                    std::string m_cOSURI;
                    bool m_cOSURIHasBeenSet;

                    /**
                     * 操作类型。可选值：

- `HeadObject`：查询对象元数据
- `DeleteObject`：删除对象
- `ListBucket`：列举对象
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 列举对象时使用的分页和目录选项
                     */
                    SeeObjectListOptions m_listOptions;
                    bool m_listOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_OPERATETWESEEDIRECTUPLOADOBJECTREQUEST_H_
