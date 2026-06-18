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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_EDITCORPTAGREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_EDITCORPTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * EditCorpTag请求参数结构体
                */
                class EditCorpTagRequest : public AbstractModel
                {
                public:
                    EditCorpTagRequest();
                    ~EditCorpTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签ID
                     * @return Id 标签ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置标签ID
                     * @param _id 标签ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取标签名称
                     * @return Name 标签名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签名称
                     * @param _name 标签名称
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
                     * 获取导入标签的模式(manual/auto)
                     * @return ImportType 导入标签的模式(manual/auto)
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置导入标签的模式(manual/auto)
                     * @param _importType 导入标签的模式(manual/auto)
                     * 
                     */
                    void SetImportType(const std::string& _importType);

                    /**
                     * 判断参数 ImportType 是否已赋值
                     * @return ImportType 是否已赋值
                     * 
                     */
                    bool ImportTypeHasBeenSet() const;

                    /**
                     * 获取自动导入标签表的id
                     * @return AutoImportTagTableId 自动导入标签表的id
                     * 
                     */
                    int64_t GetAutoImportTagTableId() const;

                    /**
                     * 设置自动导入标签表的id
                     * @param _autoImportTagTableId 自动导入标签表的id
                     * 
                     */
                    void SetAutoImportTagTableId(const int64_t& _autoImportTagTableId);

                    /**
                     * 判断参数 AutoImportTagTableId 是否已赋值
                     * @return AutoImportTagTableId 是否已赋值
                     * 
                     */
                    bool AutoImportTagTableIdHasBeenSet() const;

                    /**
                     * 获取自动导入标签的关联字段
                     * @return AutoImportField 自动导入标签的关联字段
                     * 
                     */
                    std::string GetAutoImportField() const;

                    /**
                     * 设置自动导入标签的关联字段
                     * @param _autoImportField 自动导入标签的关联字段
                     * 
                     */
                    void SetAutoImportField(const std::string& _autoImportField);

                    /**
                     * 判断参数 AutoImportField 是否已赋值
                     * @return AutoImportField 是否已赋值
                     * 
                     */
                    bool AutoImportFieldHasBeenSet() const;

                    /**
                     * 获取是否异步请求
                     * @return AsyncRequest 是否异步请求
                     * 
                     */
                    bool GetAsyncRequest() const;

                    /**
                     * 设置是否异步请求
                     * @param _asyncRequest 是否异步请求
                     * 
                     */
                    void SetAsyncRequest(const bool& _asyncRequest);

                    /**
                     * 判断参数 AsyncRequest 是否已赋值
                     * @return AsyncRequest 是否已赋值
                     * 
                     */
                    bool AsyncRequestHasBeenSet() const;

                    /**
                     * 获取自动导入标签表的表名
                     * @return AutoImportTagTableName 自动导入标签表的表名
                     * 
                     */
                    std::string GetAutoImportTagTableName() const;

                    /**
                     * 设置自动导入标签表的表名
                     * @param _autoImportTagTableName 自动导入标签表的表名
                     * 
                     */
                    void SetAutoImportTagTableName(const std::string& _autoImportTagTableName);

                    /**
                     * 判断参数 AutoImportTagTableName 是否已赋值
                     * @return AutoImportTagTableName 是否已赋值
                     * 
                     */
                    bool AutoImportTagTableNameHasBeenSet() const;

                    /**
                     * 获取事务id
                     * @return TranId 事务id
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置事务id
                     * @param _tranId 事务id
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                private:

                    /**
                     * 标签ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 导入标签的模式(manual/auto)
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * 自动导入标签表的id
                     */
                    int64_t m_autoImportTagTableId;
                    bool m_autoImportTagTableIdHasBeenSet;

                    /**
                     * 自动导入标签的关联字段
                     */
                    std::string m_autoImportField;
                    bool m_autoImportFieldHasBeenSet;

                    /**
                     * 是否异步请求
                     */
                    bool m_asyncRequest;
                    bool m_asyncRequestHasBeenSet;

                    /**
                     * 自动导入标签表的表名
                     */
                    std::string m_autoImportTagTableName;
                    bool m_autoImportTagTableNameHasBeenSet;

                    /**
                     * 事务id
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_EDITCORPTAGREQUEST_H_
