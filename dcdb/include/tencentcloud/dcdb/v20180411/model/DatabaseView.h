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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DATABASEVIEW_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DATABASEVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 数据库视图信息
                */
                class DatabaseView : public AbstractModel
                {
                public:
                    DatabaseView();
                    ~DatabaseView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视图名称
                     * @return View 视图名称
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置视图名称
                     * @param _view 视图名称
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                private:

                    /**
                     * 视图名称
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DATABASEVIEW_H_
