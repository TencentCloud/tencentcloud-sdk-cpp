#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(tag_public_header
  include/tencentcloud/tag/v20180813/TagClient.h
  )

set(tag_public_header_model
  include/tencentcloud/tag/v20180813/model/UnTagResourcesResponse.h
  include/tencentcloud/tag/v20180813/model/TagWithDelete.h
  include/tencentcloud/tag/v20180813/model/DetachResourcesTagRequest.h
  include/tencentcloud/tag/v20180813/model/GetTagValuesResponse.h
  include/tencentcloud/tag/v20180813/model/AttachResourcesTagResponse.h
  include/tencentcloud/tag/v20180813/model/AddProjectResponse.h
  include/tencentcloud/tag/v20180813/model/GetResourcesRequest.h
  include/tencentcloud/tag/v20180813/model/DeleteTagRequest.h
  include/tencentcloud/tag/v20180813/model/DeleteResourceTagResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeResourceTagsByTagKeysRequest.h
  include/tencentcloud/tag/v20180813/model/ModifyResourceTagsResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeTagsRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeProjectsRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeTagValuesRequest.h
  include/tencentcloud/tag/v20180813/model/UpdateProjectRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeResourcesByTagsUnionRequest.h
  include/tencentcloud/tag/v20180813/model/DeleteTagsResponse.h
  include/tencentcloud/tag/v20180813/model/ModifyResourcesTagValueResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeTagsResponse.h
  include/tencentcloud/tag/v20180813/model/DeleteTagsRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeTagKeysRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeProjectsResponse.h
  include/tencentcloud/tag/v20180813/model/UnTagResourcesRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeTagsSeqResponse.h
  include/tencentcloud/tag/v20180813/model/ModifyResourceTagsRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeResourceTagsResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeResourcesByTagsUnionResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsResponse.h
  include/tencentcloud/tag/v20180813/model/GetTagsResponse.h
  include/tencentcloud/tag/v20180813/model/ModifyResourcesTagValueRequest.h
  include/tencentcloud/tag/v20180813/model/TagResource.h
  include/tencentcloud/tag/v20180813/model/AddProjectRequest.h
  include/tencentcloud/tag/v20180813/model/AddResourceTagResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeResourcesByTagsResponse.h
  include/tencentcloud/tag/v20180813/model/AddResourceTagRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeTagValuesSeqResponse.h
  include/tencentcloud/tag/v20180813/model/CreateTagRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeResourceTagsByTagKeysResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeTagsSeqRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeTagValuesResponse.h
  include/tencentcloud/tag/v20180813/model/ResourceIdTag.h
  include/tencentcloud/tag/v20180813/model/TagFilter.h
  include/tencentcloud/tag/v20180813/model/Project.h
  include/tencentcloud/tag/v20180813/model/Tag.h
  include/tencentcloud/tag/v20180813/model/AttachResourcesTagRequest.h
  include/tencentcloud/tag/v20180813/model/CreateTagResponse.h
  include/tencentcloud/tag/v20180813/model/FailedResource.h
  include/tencentcloud/tag/v20180813/model/ResourceTagMapping.h
  include/tencentcloud/tag/v20180813/model/GetTagKeysRequest.h
  include/tencentcloud/tag/v20180813/model/DetachResourcesTagResponse.h
  include/tencentcloud/tag/v20180813/model/GetResourcesResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsSeqResponse.h
  include/tencentcloud/tag/v20180813/model/DeleteTagResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeTagKeysResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeTagValuesSeqRequest.h
  include/tencentcloud/tag/v20180813/model/UpdateResourceTagValueRequest.h
  include/tencentcloud/tag/v20180813/model/GetTagKeysResponse.h
  include/tencentcloud/tag/v20180813/model/TagResourcesResponse.h
  include/tencentcloud/tag/v20180813/model/CreateTagsRequest.h
  include/tencentcloud/tag/v20180813/model/CreateTagsResponse.h
  include/tencentcloud/tag/v20180813/model/GetTagsRequest.h
  include/tencentcloud/tag/v20180813/model/DescribeResourcesByTagsRequest.h
  include/tencentcloud/tag/v20180813/model/TagResourcesRequest.h
  include/tencentcloud/tag/v20180813/model/DeleteResourceTagRequest.h
  include/tencentcloud/tag/v20180813/model/UpdateResourceTagValueResponse.h
  include/tencentcloud/tag/v20180813/model/TagKeyObject.h
  include/tencentcloud/tag/v20180813/model/DescribeResourceTagsRequest.h
  include/tencentcloud/tag/v20180813/model/UpdateProjectResponse.h
  include/tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsSeqRequest.h
  include/tencentcloud/tag/v20180813/model/GetTagValuesRequest.h
  include/tencentcloud/tag/v20180813/model/ResourceTag.h
  )

set(tag_src
  src/v20180813/TagClient.cpp
  src/v20180813/model/UnTagResourcesResponse.cpp
  src/v20180813/model/TagWithDelete.cpp
  src/v20180813/model/DetachResourcesTagRequest.cpp
  src/v20180813/model/GetTagValuesResponse.cpp
  src/v20180813/model/AttachResourcesTagResponse.cpp
  src/v20180813/model/AddProjectResponse.cpp
  src/v20180813/model/GetResourcesRequest.cpp
  src/v20180813/model/DeleteTagRequest.cpp
  src/v20180813/model/DeleteResourceTagResponse.cpp
  src/v20180813/model/DescribeResourceTagsByTagKeysRequest.cpp
  src/v20180813/model/ModifyResourceTagsResponse.cpp
  src/v20180813/model/DescribeTagsRequest.cpp
  src/v20180813/model/DescribeProjectsRequest.cpp
  src/v20180813/model/DescribeTagValuesRequest.cpp
  src/v20180813/model/UpdateProjectRequest.cpp
  src/v20180813/model/DescribeResourcesByTagsUnionRequest.cpp
  src/v20180813/model/DeleteTagsResponse.cpp
  src/v20180813/model/ModifyResourcesTagValueResponse.cpp
  src/v20180813/model/DescribeTagsResponse.cpp
  src/v20180813/model/DeleteTagsRequest.cpp
  src/v20180813/model/DescribeTagKeysRequest.cpp
  src/v20180813/model/DescribeProjectsResponse.cpp
  src/v20180813/model/UnTagResourcesRequest.cpp
  src/v20180813/model/DescribeTagsSeqResponse.cpp
  src/v20180813/model/ModifyResourceTagsRequest.cpp
  src/v20180813/model/DescribeResourceTagsResponse.cpp
  src/v20180813/model/DescribeResourceTagsByResourceIdsRequest.cpp
  src/v20180813/model/DescribeResourcesByTagsUnionResponse.cpp
  src/v20180813/model/DescribeResourceTagsByResourceIdsResponse.cpp
  src/v20180813/model/GetTagsResponse.cpp
  src/v20180813/model/ModifyResourcesTagValueRequest.cpp
  src/v20180813/model/TagResource.cpp
  src/v20180813/model/AddProjectRequest.cpp
  src/v20180813/model/AddResourceTagResponse.cpp
  src/v20180813/model/DescribeResourcesByTagsResponse.cpp
  src/v20180813/model/AddResourceTagRequest.cpp
  src/v20180813/model/DescribeTagValuesSeqResponse.cpp
  src/v20180813/model/CreateTagRequest.cpp
  src/v20180813/model/DescribeResourceTagsByTagKeysResponse.cpp
  src/v20180813/model/DescribeTagsSeqRequest.cpp
  src/v20180813/model/DescribeTagValuesResponse.cpp
  src/v20180813/model/ResourceIdTag.cpp
  src/v20180813/model/TagFilter.cpp
  src/v20180813/model/Project.cpp
  src/v20180813/model/Tag.cpp
  src/v20180813/model/AttachResourcesTagRequest.cpp
  src/v20180813/model/CreateTagResponse.cpp
  src/v20180813/model/FailedResource.cpp
  src/v20180813/model/ResourceTagMapping.cpp
  src/v20180813/model/GetTagKeysRequest.cpp
  src/v20180813/model/DetachResourcesTagResponse.cpp
  src/v20180813/model/GetResourcesResponse.cpp
  src/v20180813/model/DescribeResourceTagsByResourceIdsSeqResponse.cpp
  src/v20180813/model/DeleteTagResponse.cpp
  src/v20180813/model/DescribeTagKeysResponse.cpp
  src/v20180813/model/DescribeTagValuesSeqRequest.cpp
  src/v20180813/model/UpdateResourceTagValueRequest.cpp
  src/v20180813/model/GetTagKeysResponse.cpp
  src/v20180813/model/TagResourcesResponse.cpp
  src/v20180813/model/CreateTagsRequest.cpp
  src/v20180813/model/CreateTagsResponse.cpp
  src/v20180813/model/GetTagsRequest.cpp
  src/v20180813/model/DescribeResourcesByTagsRequest.cpp
  src/v20180813/model/TagResourcesRequest.cpp
  src/v20180813/model/DeleteResourceTagRequest.cpp
  src/v20180813/model/UpdateResourceTagValueResponse.cpp
  src/v20180813/model/TagKeyObject.cpp
  src/v20180813/model/DescribeResourceTagsRequest.cpp
  src/v20180813/model/UpdateProjectResponse.cpp
  src/v20180813/model/DescribeResourceTagsByResourceIdsSeqRequest.cpp
  src/v20180813/model/GetTagValuesRequest.cpp
  src/v20180813/model/ResourceTag.cpp
  )

set(tag_include
    include/tencentcloud/tag
  )

add_library(tag ${LIB_TYPE}
  ${tag_public_header}
  ${tag_public_header_model}
  ${tag_src})

set_target_properties(tag
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tag
  )

target_include_directories(tag
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tag
  core)

#install(FILES ${tag_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tag/v20180813)
#install(FILES ${tag_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tag/v20180813/model)
install(DIRECTORY ${tag_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tag
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
