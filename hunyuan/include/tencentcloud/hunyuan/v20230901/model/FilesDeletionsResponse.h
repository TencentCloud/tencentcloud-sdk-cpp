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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESDELETIONSRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESDELETIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * FilesDeletions返回参数结构体
                */
                class FilesDeletionsResponse : public AbstractModel
                {
                public:
                    FilesDeletionsResponse();
                    ~FilesDeletionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件标识符。
                     * @return ID 文件标识符。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取对象类型，始终为 file。
                     * @return Object 对象类型，始终为 file。
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
                     * 获取是否删除成功。
                     * @return Deleted 是否删除成功。
                     * 
                     */
                    bool GetDeleted() const;

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * 文件标识符。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 对象类型，始终为 file。
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * 是否删除成功。
                     */
                    bool m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESDELETIONSRESPONSE_H_
