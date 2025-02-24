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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DAGINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DAG信息
                */
                class DAGInfo : public AbstractModel
                {
                public:
                    DAGInfo();
                    ~DAGInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询ID
                     * @return ID 查询ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置查询ID
                     * @param _iD 查询ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取DAG类型，目前只支持starrocks
                     * @return Type DAG类型，目前只支持starrocks
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置DAG类型，目前只支持starrocks
                     * @param _type DAG类型，目前只支持starrocks
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取返回的DAG的JSON字符串
                     * @return Content 返回的DAG的JSON字符串
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置返回的DAG的JSON字符串
                     * @param _content 返回的DAG的JSON字符串
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 查询ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * DAG类型，目前只支持starrocks
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 返回的DAG的JSON字符串
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DAGINFO_H_
