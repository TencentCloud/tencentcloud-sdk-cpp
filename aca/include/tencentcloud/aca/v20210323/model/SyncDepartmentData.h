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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_SYNCDEPARTMENTDATA_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_SYNCDEPARTMENTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/Department.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 同步科室信息
                */
                class SyncDepartmentData : public AbstractModel
                {
                public:
                    SyncDepartmentData();
                    ~SyncDepartmentData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作类型 1:获取科室列表  2:同步科室信息（增、改） 3:删除科室
                     * @return Cmd 操作类型 1:获取科室列表  2:同步科室信息（增、改） 3:删除科室
                     * 
                     */
                    int64_t GetCmd() const;

                    /**
                     * 设置操作类型 1:获取科室列表  2:同步科室信息（增、改） 3:删除科室
                     * @param _cmd 操作类型 1:获取科室列表  2:同步科室信息（增、改） 3:删除科室
                     * 
                     */
                    void SetCmd(const int64_t& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取科室列表
                     * @return List 科室列表
                     * 
                     */
                    std::vector<Department> GetList() const;

                    /**
                     * 设置科室列表
                     * @param _list 科室列表
                     * 
                     */
                    void SetList(const std::vector<Department>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 操作类型 1:获取科室列表  2:同步科室信息（增、改） 3:删除科室
                     */
                    int64_t m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * 科室列表
                     */
                    std::vector<Department> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_SYNCDEPARTMENTDATA_H_
